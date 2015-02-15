/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Image Capture/Devices/AirScanScanner.app/Contents/MacOS/AirScanScanner
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirScanScanner/ScannerRequest.h>

@class PageDataConsumer;

@interface NextDocumentRequest : ScannerRequest {

	PageDataConsumer* _consumer;

}

@property (nonatomic,retain) PageDataConsumer * consumer;              //@synthesize consumer=_consumer - In the implementation block
-(id)initWithLocationURL:(id)arg1 dataConsumer:(id)arg2 ;
-(int)willPerformRequest;
-(int)invalidateData;
-(int)didRecieveData:(id)arg1 ;
-(PageDataConsumer *)consumer;
-(void)setConsumer:(PageDataConsumer *)arg1 ;
-(void)didFinish;
@end
