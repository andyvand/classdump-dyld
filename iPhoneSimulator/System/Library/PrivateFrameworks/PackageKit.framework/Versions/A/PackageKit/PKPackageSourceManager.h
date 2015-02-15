/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface PKPackageSourceManager : NSObject {

	NSMutableArray* _packageSources;
	NSMutableArray* _packageSourceDistances;
	NSMutableDictionary* _refToDistanceCache;
	NSMutableDictionary* _invalidatedPackageReferencesToReasonDict;
	NSRecursiveLock* _queryLock;

}
+(id)_packageReferences:(id)arg1 matchingIdentifier:(id)arg2 version:(id)arg3 ;
+(id)defaultManager;
-(int)distanceForPackageReference:(id)arg1 ;
-(id)_sortedPackageReferencesMatchingIdentifier:(id)arg1 version:(id)arg2 ;
-(id)_validSubsetOfPackageReferences:(id)arg1 ;
-(id)_nearestPackageReference:(id)arg1 ;
-(void)removeSource:(id)arg1 ;
-(id)bestPackageReferenceMatchingIdentifier:(id)arg1 version:(id)arg2 ;
-(void)invalidatePackageReference:(id)arg1 reason:(int)arg2 ;
-(id)allPackageSources;
-(void)archiveToCoder:(id)arg1 ;
-(void)restoreFromCoder:(id)arg1 ;
-(void)clearInvalidationForIdentifier:(id)arg1 version:(id)arg2 forReason:(int)arg3 ;
-(void)clearInvalidationListForReason:(int)arg1 ;
-(void)clearInvalidationList;
-(void)addSource:(id)arg1 distance:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end
