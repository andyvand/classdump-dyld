/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class AVStreamDataParser;

@interface WebAVStreamDataParserListener : NSObject {

	WeakPtr<WebCore::SourceBufferPrivateAVFObjC>* _parent;
	AVStreamDataParser* _parser;

}
-(id)initWithParser:(id)arg1 parent:(WeakPtr<WebCore::SourceBufferPrivateAVFObjC>*)arg2 ;
-(void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 ;
-(void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 withDiscontinuity:(char)arg3 ;
-(void)streamDataParser:(id)arg1 didFailToParseStreamDataWithError:(id)arg2 ;
-(void)streamDataParser:(id)arg1 didProvideMediaData:(opaqueCMSampleBufferRef)arg2 forTrackID:(int)arg3 mediaType:(id)arg4 flags:(unsigned long long)arg5 ;
-(void)streamDataParser:(id)arg1 didReachEndOfTrackWithTrackID:(int)arg2 mediaType:(id)arg3 ;
-(void)streamDataParser:(id)arg1 didProvideContentKeyRequestInitializationData:(id)arg2 forTrackID:(int)arg3 ;
-(void)dealloc;
-(void)invalidate;
@end

