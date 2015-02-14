/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSFileVersion, NSMutableArray, NSDocument;

@interface _NSDocumentRevisionsLoadingOperation : NSOperation {

	NSFileVersion* version;
	NSMutableArray* documentConsumers;
	/*^block*/id finalCompletionBlock;
	NSDocument* document;
	char documentLoadingComplete;
	char hasWaiter;

}

@property (retain) NSDocument * document; 
-(void)dealloc;
-(NSDocument *)document;
-(void)setDocument:(NSDocument *)arg1 ;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(void)waitUntilFinished;
-(void)addDocumentConsumer:(/*^block*/id)arg1 ;
-(id)initWithVersion:(id)arg1 ;
-(void)_documentLoadingDidComplete;
@end

