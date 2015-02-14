/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class NSImage, NSString, NSDate, WBSAutomaticReadingListSocialSource, NSURL;

@interface WBSAutomaticReadingListItem : NSObject {

	NSImage* _fallbackProfileImage;
	char _repostedByAuthenticatedUser;
	char _fetchingProfileImage;
	NSString* _uniqueIdentifier;
	id _sourceRecordID;
	NSDate* _sourceRecordCreationDate;
	NSString* _sourceRecordText;
	id _originatorID;
	NSString* _originatorDisplayName;
	NSString* _urlString;
	NSString* _reposterDisplayName;
	NSString* _reposterScreenName;
	NSImage* _originatorProfileImage;
	NSString* _socialSourceAccountIdentifier;

}

@property (nonatomic,readonly) WBSAutomaticReadingListSocialSource * socialSource; 
@property (nonatomic,copy) NSString * uniqueIdentifier;                                                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) id sourceRecordID;                                                           //@synthesize sourceRecordID=_sourceRecordID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * sourceRecordCreationDate;                                           //@synthesize sourceRecordCreationDate=_sourceRecordCreationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceRecordText;                                                 //@synthesize sourceRecordText=_sourceRecordText - In the implementation block
@property (nonatomic,copy,readonly) id originatorID;                                                             //@synthesize originatorID=_originatorID - In the implementation block
@property (nonatomic,copy,readonly) NSString * originatorDisplayName;                                            //@synthesize originatorDisplayName=_originatorDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * urlString;                                                        //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSString * reposterDisplayName;                                                   //@synthesize reposterDisplayName=_reposterDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * reposterScreenName;                                                    //@synthesize reposterScreenName=_reposterScreenName - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSRange displayURLRange; 
@property (nonatomic,readonly) NSRange emphasizedTextRange; 
@property (nonatomic,readonly) NSURL * originatorProfileURL; 
@property (nonatomic,readonly) NSURL * sourceRecordURL; 
@property (nonatomic,readonly) NSString * domainString; 
@property (nonatomic,readonly) NSString * continuousBannerDisplayString; 
@property (nonatomic,readonly) NSString * continuousBannerTitle; 
@property (nonatomic,retain) NSImage * originatorProfileImage;                                                   //@synthesize originatorProfileImage=_originatorProfileImage - In the implementation block
@property (assign,getter=isRepostedByAuthenticatedUser,nonatomic) char repostedByAuthenticatedUser;              //@synthesize repostedByAuthenticatedUser=_repostedByAuthenticatedUser - In the implementation block
@property (nonatomic,copy,readonly) NSString * socialSourceAccountIdentifier;                                    //@synthesize socialSourceAccountIdentifier=_socialSourceAccountIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * originatorProfileImageURL; 
@property (nonatomic,readonly) NSURL * biggerOriginatorProfileImageURL; 
@property (assign,nonatomic) char fetchingProfileImage;                                                          //@synthesize fetchingProfileImage=_fetchingProfileImage - In the implementation block
+(id)keyPathsForValuesAffectingDomainString;
-(void)updateFallbackImageIfNecessary;
-(NSString *)originatorDisplayName;
-(NSURL *)sourceRecordURL;
-(NSURL *)originatorProfileURL;
-(char)isRepostedByAuthenticatedUser;
-(WBSAutomaticReadingListSocialSource *)socialSource;
-(NSString *)socialSourceAccountIdentifier;
-(NSString *)urlString;
-(NSString *)continuousBannerTitle;
-(NSString *)continuousBannerDisplayString;
-(NSImage *)originatorProfileImage;
-(NSString *)reposterDisplayName;
-(NSString *)reposterScreenName;
-(NSString *)domainString;
-(NSRange)displayURLRange;
-(NSRange)emphasizedTextRange;
-(char)fetchingProfileImage;
-(void)setFetchingProfileImage:(char)arg1 ;
-(void)_fetchOriginatorProfileImageForSize:(CGSize)arg1 ;
-(char)isAcceptableOriginatorProfileImage:(id)arg1 ;
-(void)_getFallbackImage;
-(id)bestOriginatorProfileImageForSize:(CGSize)arg1 ;
-(void)setOriginatorProfileImage:(NSImage *)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2 ;
-(NSURL *)originatorProfileImageURL;
-(NSURL *)biggerOriginatorProfileImageURL;
-(id)originatorID;
-(id)sourceRecordID;
-(NSDate *)sourceRecordCreationDate;
-(void)setRepostedByAuthenticatedUser:(char)arg1 ;
-(NSString *)sourceRecordText;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)uniqueIdentifier;
-(NSString *)displayString;
@end

