/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/WBSAutomaticReadingListItem.h>

@class NSString;

@interface WBSAutomaticReadingListSinaWeiboItem : WBSAutomaticReadingListItem {

	NSString* _originatorProfileImageURLString;
	NSString* _profileURLComponent;

}

@property (nonatomic,copy) NSString * originatorProfileImageURLString;              //@synthesize originatorProfileImageURLString=_originatorProfileImageURLString - In the implementation block
@property (nonatomic,copy) NSString * profileURLComponent;                          //@synthesize profileURLComponent=_profileURLComponent - In the implementation block
-(id)sourceRecordURL;
-(id)originatorProfileURL;
-(id)socialSource;
-(id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2 ;
-(id)originatorProfileImageURL;
-(id)biggerOriginatorProfileImageURL;
-(NSString *)originatorProfileImageURLString;
-(id)_profileImageURLWithImageSizeString:(id)arg1 ;
-(NSString *)profileURLComponent;
-(void)setOriginatorProfileImageURLString:(NSString *)arg1 ;
-(void)setProfileURLComponent:(NSString *)arg1 ;
@end

