/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <CoreFoundation/NSData.h>

@interface WebCoreSharedBufferData : NSData {

	RefPtr<WebCore::SharedBuffer::DataBuffer>* sharedBufferDataBuffer;

}
+(void)initialize;
-(id)initWithSharedBufferDataBuffer:(DataBuffer*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(const void*)bytes;
-(unsigned long long)length;
@end

