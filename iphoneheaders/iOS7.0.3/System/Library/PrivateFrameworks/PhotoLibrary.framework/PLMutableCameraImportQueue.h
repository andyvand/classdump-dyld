/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLMutableCameraImportQueue : NSObject {

	NSMutableArray* _items;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)currentItem;
-(void)enqueueImportItem:(id)arg1 ;
-(void)dequeueImportItem;
@end
