/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUCollectingDataConsumer.h>

@class NSData, NSMutableData;

@interface SUDataBufferConsumer : NSObject <SUCollectingDataConsumer> {

	NSMutableData* _buffer;

}

@property (nonatomic,readonly) NSData * consumedData; 
-(id)init;
-(void)finish;
-(id)consumedData;
-(int)consumeData:(id)arg1 ;
@end
