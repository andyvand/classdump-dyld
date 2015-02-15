/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MailCore/MailCore-Structs.h>
@class NSSet;

@interface MCAuthScheme : NSObject

@property (copy,readonly) NSSet * supportedSaslMechanisms; 
+(id)knownSchemes;
+(id)schemeWithAccountInfo:(id)arg1 ;
+(id)schemeWithInternetAccountsScheme:(id)arg1 ;
+(id)schemeWithName:(id)arg1 ;
+(id)schemeWithApplescriptScheme:(unsigned)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(char)requiresPassword;
-(NSSet *)supportedSaslMechanisms;
-(char)requiresUsername;
@end

