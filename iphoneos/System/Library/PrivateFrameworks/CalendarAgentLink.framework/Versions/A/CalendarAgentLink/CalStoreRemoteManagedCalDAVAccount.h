/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalStoreRemoteManagedAccount.h>

@interface CalStoreRemoteManagedCalDAVAccount : CalStoreRemoteManagedAccount {

	char _useKerberos;

}

@property (assign,nonatomic) char useKerberos;              //@synthesize useKerberos=_useKerberos - In the implementation block
+(char)supportsSecureCoding;
-(id)password;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUseKerberos:(char)arg1 ;
-(char)useKerberos;
-(void)setPassword:(id)arg1 ;
@end

