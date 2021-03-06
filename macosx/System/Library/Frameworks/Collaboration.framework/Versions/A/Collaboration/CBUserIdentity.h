/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Collaboration.framework/Versions/A/Collaboration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Collaboration/Collaboration-Structs.h>
#import <Collaboration/CBIdentity.h>
#import <Collaboration/NSCoding.h>
#import <Collaboration/NSCopying.h>

@interface CBUserIdentity : CBIdentity <NSCoding, NSCopying>
+(id)userIdentityWithPosixUID:(unsigned)arg1 authority:(id)arg2 ;
-(char)authenticateWithPassword:(id)arg1 ;
-(id)initUserWithName:(id)arg1 authority:(id)arg2 ;
-(unsigned)posixUID;
-(OpaqueSecCertificateRefRef)certificate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

