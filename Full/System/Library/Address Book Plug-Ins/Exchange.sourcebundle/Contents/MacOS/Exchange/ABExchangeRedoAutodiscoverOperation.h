/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:54:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Address Book Plug-Ins/Exchange.sourcebundle/Contents/MacOS/Exchange
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ABExchangeAutodiscovery, ABExchangeSource;

@interface ABExchangeRedoAutodiscoverOperation : NSOperation {

	ABExchangeAutodiscovery* mAutodiscovery;
	ABExchangeSource* mSource;

}

@property (retain) ABExchangeAutodiscovery * autodiscovery; 
@property (retain) ABExchangeSource * source; 
-(ABExchangeAutodiscovery *)autodiscovery;
-(void)setAutodiscovery:(ABExchangeAutodiscovery *)arg1 ;
-(void)dealloc;
-(void)cancel;
-(ABExchangeSource *)source;
-(void)setSource:(ABExchangeSource *)arg1 ;
-(void)main;
-(id)initWithSource:(id)arg1 ;
@end
