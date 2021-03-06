/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>
#import <CloudKit/NSSecureCoding.h>

@class NSArray;

@interface CKDiscoverUserInfosOperationInfo : CKOperationInfo <NSSecureCoding> {

	char _shouldDiscoverAllContacts;
	NSArray* _emails;
	NSArray* _userRecordIDs;

}

@property (nonatomic,retain) NSArray * emails;                            //@synthesize emails=_emails - In the implementation block
@property (nonatomic,retain) NSArray * userRecordIDs;                     //@synthesize userRecordIDs=_userRecordIDs - In the implementation block
@property (assign,nonatomic) char shouldDiscoverAllContacts;              //@synthesize shouldDiscoverAllContacts=_shouldDiscoverAllContacts - In the implementation block
+(char)supportsSecureCoding;
-(NSArray *)userRecordIDs;
-(void)setUserRecordIDs:(NSArray *)arg1 ;
-(void)setShouldDiscoverAllContacts:(char)arg1 ;
-(char)shouldDiscoverAllContacts;
-(NSArray *)emails;
-(void)setEmails:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

