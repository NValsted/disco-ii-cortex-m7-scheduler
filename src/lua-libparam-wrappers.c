#include <lua.h>

int lua_fetch_operand_param_pair(lua_State * L) {
	const char * param_name = luaL_checkstring(L, 1);
	int node = luaL_checkinteger(L, 2);

	operand_param_pair_t pair;
	int result = fetch_operand_param_pair((char *)param_name, &pair, node);

	if (result == -1) {
		lua_pushnil(L);
		lua_pushstring(L, "Failed to fetch or parse parameter");
		return 2;
	}

	switch (pair.operand.type) {
		case OPERAND_TYPE_UINT:
			lua_pushinteger(L, pair.operand.value.u64);
			break;
		case OPERAND_TYPE_INT:
			lua_pushinteger(L, pair.operand.value.i64);
			break;
		case OPERAND_TYPE_FLOAT:
			lua_pushnumber(L, pair.operand.value.d);
			break;
		case OPERAND_TYPE_STRING:
			lua_pushstring(L, pair.operand.value.s);
			break;
	}

	return 1;
}

int lua_set_param(lua_State * L) {
	const char * param_name = luaL_checkstring(L, 1);
	const char * value_str = luaL_checkstring(L, 2);
	int node = luaL_checkinteger(L, 3);

	int result = proc_set_param((char *)param_name, NULL, (char *)value_str, node);

	lua_pushinteger(L, result);

	return 1;
}
