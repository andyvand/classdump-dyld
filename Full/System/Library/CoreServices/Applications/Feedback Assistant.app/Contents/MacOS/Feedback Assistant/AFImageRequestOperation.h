/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/AFHTTPRequestOperation.h>

@class NSImage;

@interface AFImageRequestOperation : AFHTTPRequestOperation {

	NSImage* _responseImage;

}

@property (nonatomic,retain) NSImage * responseImage;              //@synthesize responseImage=_responseImage - In the implementation block
+(char)canProcessRequest:(id)arg1 ;
+(id)acceptableContentTypes;
+(id)imageRequestOperationWithRequest:(id)arg1 imageProcessingBlock:(/*^block*/id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
+(id)imageRequestOperationWithRequest:(id)arg1 success:(/*^block*/id)arg2 ;
-(void)setCompletionBlockWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)setResponseImage:(NSImage *)arg1 ;
-(NSImage *)responseImage;
-(id)initWithRequest:(id)arg1 ;
@end

