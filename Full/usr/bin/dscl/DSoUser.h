/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/dscl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <dscl/DSoRecord.h>

@interface DSoUser : DSoRecord
-(id)initInNode:(id)arg1 recordRef:(unsigned)arg2 ;
-(unsigned)getGid;
-(unsigned)getUid;
-(id)initInNode:(id)arg1 name:(id)arg2 ;
-(void)changePassword:(id)arg1 toNewPassword:(id)arg2 ;
-(char)isAdmin;
-(int)authenticate:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
@end
