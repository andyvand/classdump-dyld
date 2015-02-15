/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLMicroBlogSheetDelegate
@property (nonatomic,copy) id locationInformationChangedBlock; 
@optional
-(void)ensureUserRecordStore;
-(long long)characterCountForText:(id)arg1 shortenedURLCost:(long long)arg2;
-(char)countMediaAttachmentsTowardCharacterCount;
-(id)cachedProfileImageDataForScreenName:(id)arg1;

@required
-(void)setActiveAccountIdentifier:(id)arg1;
-(void)fetchSessionInfo:(/*^block*/id)arg1;
-(void)fetchProfileImageDataForScreenName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)recordsMatchingPrefixString:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchCurrentUrlLimits:(/*^block*/id)arg1;
-(void)fetchCurrentImageLimits:(/*^block*/id)arg1;
-(void)setGeotagStatus:(int)arg1;
-(void)fetchGeotagStatus:(/*^block*/id)arg1;
-(void)sendStatus:(id)arg1 completion:(/*^block*/id)arg2;
-(void)beginPotentialLocationUse;
-(void)endPotentialLocationUse;
-(void)showSettingsIfNeeded;
-(id)serviceAccountTypeIdentifier;
-(void)deferExpensiveOperations;
-(void)stopDeferringExpensiveOperations;
-(id)locationInformationChangedBlock;
-(void)setLocationInformationChangedBlock:(/*^block*/id)arg1;

@end

