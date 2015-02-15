/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSArray;

@interface AKModelController : NSObject {

	NSMutableOrderedSet* _mutablePageModelControllers;

}

@property (readonly) NSArray * pageModelControllers; 
-(NSArray *)pageModelControllers;
-(void)insertObject:(id)arg1 inPageModelControllersAtIndex:(unsigned long long)arg2 ;
-(void)replaceObjectInPageModelControllersAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertPageModelControllers:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeObjectFromPageModelControllersAtIndex:(unsigned long long)arg1 ;
-(void)removePageModelControllersAtIndexes:(id)arg1 ;
-(void)replacePageModelControllersAtIndexes:(id)arg1 withPageModelControllers:(id)arg2 ;
-(id)pageModelControllerForPage:(unsigned long long)arg1 ;
-(id)pageModelControllerForAnnotation:(id)arg1 ;
-(id)allSelectedAnnotations;
-(void)deleteAllSelectedAnnotations;
-(id)archivablePageModelControllers;
-(void)populateFromArchivablePageModelControllers:(id)arg1 ;
-(void)deselectAllAnnotations;
-(id)init;
@end
