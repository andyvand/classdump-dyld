/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSMutableSet, NSString, NSNumber, NSDictionary, PLManagedAsset;

@interface _PLGenericAlbum : PLManagedObject

@property (nonatomic,@dynamic,retain) NSMutableSet * albumLists; 
@property (nonatomic,@dynamic,retain) NSString * title; 
@property (nonatomic,@dynamic,retain) NSString * uuid; 
@property (nonatomic,@dynamic,retain) NSNumber * kind; 
@property (nonatomic,@dynamic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,@dynamic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,@dynamic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,@dynamic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (assign,nonatomic,@dynamic) int pendingItemsCount; 
@property (assign,nonatomic,@dynamic) int pendingItemsType; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
@end
