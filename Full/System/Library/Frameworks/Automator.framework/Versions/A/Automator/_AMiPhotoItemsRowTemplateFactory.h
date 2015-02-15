/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <Automator/_AMRowTemplateFactory.h>

@interface _AMiPhotoItemsRowTemplateFactory : _AMRowTemplateFactory {

	CFRunLoopSourceRef _runLoopSource;
	char _queryFinished;

}
+(id)sharedInstance;
-(id)rowTemplatesForItemType:(id)arg1 ;
-(id)convertToEvaluationPredicateFromComparisonUIPredicate:(id)arg1 withItemType:(id)arg2 ;
-(id)stringRowTemplatesForAnyItemInCollectionWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)pixelRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)apertureRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)shutterSpeedRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)rowTemplatesForIPhotoPhotos;
-(id)rowTemplatesForIPhotoAlbums;
-(id)_iLMBiPhotoPhotoPredicateForPersistentPredicate:(id)arg1 ;
-(id)_spotlightIPhotoPhotoPredicateForPersistentPredicate:(id)arg1 ;
-(id)_segregateDomainsInPredicate:(id)arg1 ;
-(id)photosInBatch:(id)arg1 matchingPredicateDictionary:(id)arg2 error:(id*)arg3 ;
-(id)_filterIPhotoPhotoBatchItems:(id)arg1 withSpotlightPredicate:(id)arg2 error:(id*)arg3 ;
-(id)_filterIPhotoPhotoBatchItems:(id)arg1 withILMBPredicate:(id)arg2 ;
-(id)_prepareBatchFromPhotos:(id)arg1 ;
-(id)filterPhotos:(id)arg1 matchingPredicate:(id)arg2 error:(id*)arg3 ;
-(id)commonParentOfPaths:(id)arg1 ;
@end

