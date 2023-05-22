#pragma once
#ifndef __MEMBER_HANDLER_H__
#define __MEMBER_HANDLER_H__

#include "Member.h"

class MemberHandler
{
private:
	Member* memberList[100];
	int memberNum;
public:
	MemberHandler();
};
#endif // !__MEMBER_HANDLER_H__
