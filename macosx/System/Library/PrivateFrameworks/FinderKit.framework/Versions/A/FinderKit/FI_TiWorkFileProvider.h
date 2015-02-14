/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/NSFileProvider.h>

@class NSURL, NSOperationQueue, NSString;

@interface FI_TiWorkFileProvider : NSObject <NSFileProvider> {

	TNSRef<NSOperationQueue *> _queue;
	TNSRef<NSURL *> _originalItem;
	TNSRef<NSURL *> _conversionDirectory;
	TNSRef<NSURL *> _convertedItem;
	BOOL _converted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * _providedItemsURL; 
@property (readonly) NSOperationQueue * _providedItemsOperationQueue; 
@property (copy,readonly) NSString * _fileReactorID; 
+(id)convertiWorkDocument:(id)arg1 ;
+(id)providerForiWorkDocument:(TFENode*)arg1 ;
+(TFENode*)makeUniqueTempDirectoryWithSeed:(long long)arg1 ;
+(int)convertiWorkDocument:(id)arg1 destination:(id)arg2 withName:(id)arg3 ;
-(void)autoUnregister;
-(void)register;
-(void)unregister;
-(NSURL *)_providedItemsURL;
-(NSOperationQueue *)_providedItemsOperationQueue;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_provideItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2 ;
-(id)initWithNode:(TFENode*)arg1 ;
@end

