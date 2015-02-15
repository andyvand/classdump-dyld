/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectors/DataDetectors-Structs.h>
#import <Foundation/NSOperation.h>

@protocol DDOperationDelegate;
@class DDThreadManager, NSString, NSArray;

@interface DDOperation : NSOperation {

	id<DDOperationDelegate> _delegate;
	DDThreadManager* _threadManager;
	DDScanQueryRef _query;
	NSString* _scannedTextID;
	id _viewOrController;
	NSArray* _results;
	int _tag;
	int _failuresCount;

}

@property (copy) NSString * scannedTextID;              //@synthesize scannedTextID=_scannedTextID - In the implementation block
@property (assign) id viewOrController;                 //@synthesize viewOrController=_viewOrController - In the implementation block
@property (retain) NSArray * results;                   //@synthesize results=_results - In the implementation block
@property (assign) int tag;                             //@synthesize tag=_tag - In the implementation block
@property (assign) int failuresCount;                   //@synthesize failuresCount=_failuresCount - In the implementation block
-(NSString *)scannedTextID;
-(id)viewOrController;
-(DDScanQueryRef)scanQuery;
-(int)failuresCount;
-(void)setFailuresCount:(int)arg1 ;
-(void)setScanQuery:(DDScanQueryRef)arg1 ;
-(id)initWithQuery:(DDScanQueryRef)arg1 threadManager:(id)arg2 ;
-(void)setViewOrController:(id)arg1 ;
-(void)postOperationCleanUp;
-(void)_scanDone;
-(id)initWithStringToScan:(id)arg1 threadManager:(id)arg2 ;
-(void)scan;
-(void)setScannedTextID:(NSString *)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)setTag:(int)arg1 ;
-(int)tag;
-(id)delegate;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
@end
