/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/dsimport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ImportDelegate
@required
-(void)userWithBadShortName:(id)arg1;
-(void)failedRecord:(id)arg1 type:(id)arg2;
-(void)succeededRecord:(id)arg1 type:(id)arg2;
-(void)deletedRecord:(id)arg1 type:(id)arg2;
-(void)changedRecord:(id)arg1 type:(id)arg2;

@end
