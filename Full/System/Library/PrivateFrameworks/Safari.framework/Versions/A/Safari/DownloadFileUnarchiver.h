/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface DownloadFileUnarchiver : NSObject {

	NSString* _sourcePath;
	NSString* _destinationPath;
	/*^block*/id _completionBlock;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (nonatomic,copy) NSString * sourcePath;                                            //@synthesize sourcePath=_sourcePath - In the implementation block
@property (copy) NSString * destinationPath;                                                 //@synthesize destinationPath=_destinationPath - In the implementation block
@property (nonatomic,readonly) char canInterruptUnarchiving; 
@property (nonatomic,copy) id completionBlock;                                               //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> synchronizationQueue;              //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
-(id)createTemporaryDirectory;
-(void)didFinishUnarchiving;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
-(id)pickDestinationPath:(id)arg1 ;
-(void)setDestinationPath:(NSString *)arg1 ;
-(void)unarchive;
-(char)canInterruptUnarchiving;
-(void)interruptUnarchiving;
-(void)setSourcePath:(NSString *)arg1 ;
-(NSString *)destinationPath;
-(id)initWithSourcePath:(id)arg1 ;
-(void)unarchiveWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setSynchronizationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(NSString *)sourcePath;
@end

