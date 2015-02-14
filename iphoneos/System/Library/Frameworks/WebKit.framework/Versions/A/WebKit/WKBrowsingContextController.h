/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKBrowsingContextHandle, _WKRemoteObjectRegistry, NSString, WKBackForwardList, NSURL, NSArray;

@interface WKBrowsingContextController : NSObject {

	WeakObjCPtr<id<WKBrowsingContextHistoryDelegate> > _historyDelegate;
	RefPtr<WebKit::WebPageProxy>* _page;
	unique_ptr<PageLoadStateObserver, std::__1::default_delete<PageLoadStateObserver> >* _pageLoadStateObserver;
	WeakObjCPtr<id<WKBrowsingContextLoadDelegate> > _loadDelegate;
	WeakObjCPtr<id<WKBrowsingContextPolicyDelegate> > _policyDelegate;
	RetainPtr<_WKRemoteObjectRegistry>* _remoteObjectRegistry;
	unsigned long long _observedRenderingProgressEvents;

}

@property (readonly) OpaqueWKPageRef _pageRef; 
@property (readonly) char hasOnlySecureContent; 
@property (assign) unsigned long long paginationMode; 
@property (assign) char paginationBehavesLikeColumns; 
@property (assign) double pageLength; 
@property (assign) double gapBetweenPages; 
@property (readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) WKBrowsingContextHandle * handle; 
@property (nonatomic,readonly) _WKRemoteObjectRegistry * _remoteObjectRegistry; 
@property (nonatomic,readonly) int processIdentifier; 
@property (__weak) id<WKBrowsingContextLoadDelegate> loadDelegate; 
@property (__weak) id<WKBrowsingContextPolicyDelegate> policyDelegate; 
@property (__weak) id<WKBrowsingContextHistoryDelegate> historyDelegate; 
@property (copy) NSString * applicationNameForUserAgent; 
@property (copy) NSString * customUserAgent; 
@property (readonly) char canGoForward; 
@property (readonly) char canGoBack; 
@property (readonly) WKBackForwardList * backForwardList; 
@property (getter=isLoading,readonly) char loading; 
@property (readonly) NSURL * activeURL; 
@property (readonly) NSURL * provisionalURL; 
@property (readonly) NSURL * committedURL; 
@property (readonly) NSURL * unreachableURL; 
@property (readonly) double estimatedProgress; 
@property (assign,nonatomic) unsigned long long observedRenderingProgressEvents;              //@synthesize observedRenderingProgressEvents=_observedRenderingProgressEvents - In the implementation block
@property (readonly) NSString * title; 
@property (readonly) NSArray * certificateChain; 
@property (assign) double textZoom; 
@property (assign) double pageZoom; 
+(void)registerSchemeForCustomProtocol:(id)arg1 ;
+(id)_browsingContextControllerForPageRef:(OpaqueWKPageRef)arg1 ;
+(void)unregisterSchemeForCustomProtocol:(id)arg1 ;
+(id)customSchemes;
-(double)estimatedProgress;
-(void)stopLoading;
-(NSURL *)committedURL;
-(void)setPolicyDelegate:(id<WKBrowsingContextPolicyDelegate>)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(void)setApplicationNameForUserAgent:(NSString *)arg1 ;
-(NSURL *)unreachableURL;
-(NSString *)applicationNameForUserAgent;
-(WKBrowsingContextHandle *)handle;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)reload;
-(_WKRemoteObjectRegistry *)_remoteObjectRegistry;
-(OpaqueWKPageRef)_pageRef;
-(WKBackForwardList *)backForwardList;
-(void)goToBackForwardListItem:(id)arg1 ;
-(char)hasOnlySecureContent;
-(void)reloadFromOrigin;
-(void)loadRequest:(id)arg1 userData:(id)arg2 ;
-(void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 userData:(id)arg3 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 userData:(id)arg3 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5 ;
-(void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 ;
-(void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3 ;
-(NSString *)customUserAgent;
-(void)setCustomUserAgent:(NSString *)arg1 ;
-(NSURL *)activeURL;
-(NSURL *)provisionalURL;
-(void)setObservedRenderingProgressEvents:(unsigned long long)arg1 ;
-(NSArray *)certificateChain;
-(double)textZoom;
-(void)setTextZoom:(double)arg1 ;
-(double)pageZoom;
-(void)setPageZoom:(double)arg1 ;
-(id<WKBrowsingContextLoadDelegate>)loadDelegate;
-(void)setLoadDelegate:(id<WKBrowsingContextLoadDelegate>)arg1 ;
-(id<WKBrowsingContextPolicyDelegate>)policyDelegate;
-(id<WKBrowsingContextHistoryDelegate>)historyDelegate;
-(void)setHistoryDelegate:(id<WKBrowsingContextHistoryDelegate>)arg1 ;
-(id)_initWithPageRef:(OpaqueWKPageRef)arg1 ;
-(unsigned long long)observedRenderingProgressEvents;
-(void)setPaginationMode:(unsigned long long)arg1 ;
-(unsigned long long)paginationMode;
-(void)setPaginationBehavesLikeColumns:(char)arg1 ;
-(char)paginationBehavesLikeColumns;
-(void)setPageLength:(double)arg1 ;
-(double)pageLength;
-(void)setGapBetweenPages:(double)arg1 ;
-(double)gapBetweenPages;
-(char)isLoading;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)dealloc;
-(NSString *)title;
-(int)processIdentifier;
-(unsigned long long)pageCount;
-(char)canGoBack;
-(char)canGoForward;
-(void)goBack;
-(void)goForward;
@end

