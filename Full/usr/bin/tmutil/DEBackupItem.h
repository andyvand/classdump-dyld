/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/tmutil
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <tmutil/tmutil-Structs.h>
#import <tmutil/DEItem.h>

@interface DEBackupItem : DEItem
+(acl_entryRef)folderGuardACE;
+(acl_entryRef)fileGuardACE;
+(id)standardIgnoredBackupXattrPrefixes;
+(void)initialize;
-(aclRef)copyACLForComparison;
-(char)compareContentModificationDate:(id)arg1 ;
@end
