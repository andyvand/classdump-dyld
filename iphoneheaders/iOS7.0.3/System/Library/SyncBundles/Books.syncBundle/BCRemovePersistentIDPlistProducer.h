/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:45:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Books/BCPlistProducer.h>

@class NSArray;

@interface BCRemovePersistentIDPlistProducer : BCPlistProducer {

	NSArray* _persistentIDs;

}
-(id)initWithPath:(id)arg1 persistentIDs:(id)arg2 ;
-(id)produceData;
-(void)dealloc;
-(BOOL)shouldRetry;
@end
