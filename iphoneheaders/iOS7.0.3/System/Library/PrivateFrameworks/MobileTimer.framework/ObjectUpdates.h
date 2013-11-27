/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface ObjectUpdates : NSObject {

	NSMutableArray* _addedObjects;
	NSMutableArray* _removedObjects;

}

@property (nonatomic,readonly) NSMutableArray * addedObjects;                //@synthesize addedObjects=_addedObjects - In the implementation block
@property (nonatomic,readonly) NSMutableArray * removedObjects;              //@synthesize removedObjects=_removedObjects - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(id)addedObjects;
-(id)removedObjects;
@end
