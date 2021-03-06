/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVAssetResourceLoaderRequest.h>

@class AVAssetResourceLoadingRequestInternal, NSURLRequest, AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, NSURLResponse, NSString;

@interface AVAssetResourceLoadingRequest : NSObject <AVAssetResourceLoaderRequest> {

	AVAssetResourceLoadingRequestInternal* _loadingRequest;

}

@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=isFinished,nonatomic,readonly) char finished; 
@property (getter=isCancelled,nonatomic,readonly) char cancelled; 
@property (nonatomic,readonly) AVAssetResourceLoadingContentInformationRequest * contentInformationRequest; 
@property (nonatomic,readonly) AVAssetResourceLoadingDataRequest * dataRequest; 
@property (nonatomic,copy) NSURLResponse * response; 
@property (nonatomic,copy) NSURLRequest * redirect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SEL)_selectorForInformingDelegateOfCancellationByFig;
-(NSURLRequest *)request;
-(id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(AVAssetResourceLoadingDataRequest *)dataRequest;
-(void)finishLoading;
-(void)finishLoadingWithError:(id)arg1 ;
-(AVAssetResourceLoadingContentInformationRequest *)contentInformationRequest;
-(id)_weakReference;
-(void)_removeFigPlaybackItemListeners;
-(void)_addFigPlaybackItemListeners;
-(id)_requestDictionary;
-(void)_performCancellationByClient;
-(char)_shouldInformDelegateOfFigCancellation;
-(id)initWithResourceLoader:(id)arg1 requestDictionary:(id)arg2 ;
-(id)_resourceLoader;
-(void)_sendDataIncrementally:(id)arg1 data:(id)arg2 ;
-(void)_appendToCachedData:(id)arg1 ;
-(NSURLRequest *)redirect;
-(void)_setContentInformationRequest:(id)arg1 ;
-(void)_addFigAssetImageGeneratorListeners;
-(void)_setDataRequest:(id)arg1 ;
-(void)_removeFigAssetImageGeneratorListeners;
-(char)_tryToMarkAsCancelled;
-(void)_sendDictionaryForURLRequest:(id)arg1 context:(id)arg2 ;
-(id)_getAndClearCachedData;
-(void)setRedirect:(NSURLRequest *)arg1 ;
-(id)serializableRepresentation;
-(void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3 ;
-(void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(NSString *)description;
-(char)isCancelled;
-(char)isFinished;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(char)finished;
-(NSURLResponse *)response;
@end

