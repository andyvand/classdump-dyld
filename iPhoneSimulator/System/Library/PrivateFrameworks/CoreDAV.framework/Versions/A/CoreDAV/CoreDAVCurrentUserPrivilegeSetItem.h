/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem {

	NSMutableSet* _privileges;

}

@property (nonatomic,retain) NSMutableSet * privileges;              //@synthesize privileges=_privileges - In the implementation block
+(id)copyParseRules;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSMutableSet *)privileges;
-(void)setPrivileges:(NSMutableSet *)arg1 ;
-(void)addPrivilege:(id)arg1 ;
-(char)hasPrivilegeWithNameSpace:(id)arg1 andName:(id)arg2 ;
@end

