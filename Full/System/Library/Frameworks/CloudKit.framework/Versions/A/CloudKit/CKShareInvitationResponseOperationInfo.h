/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class NSArray;

@interface CKShareInvitationResponseOperationInfo : CKOperationInfo {

	NSArray* _invitationsToAccept;
	NSArray* _invitationsToDecline;

}

@property (nonatomic,retain) NSArray * invitationsToAccept;               //@synthesize invitationsToAccept=_invitationsToAccept - In the implementation block
@property (nonatomic,retain) NSArray * invitationsToDecline;              //@synthesize invitationsToDecline=_invitationsToDecline - In the implementation block
+(char)supportsSecureCoding;
-(NSArray *)invitationsToAccept;
-(void)setInvitationsToAccept:(NSArray *)arg1 ;
-(NSArray *)invitationsToDecline;
-(void)setInvitationsToDecline:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

