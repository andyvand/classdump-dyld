/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKAssetEpub/BKAssetEpub-Structs.h>
#import <BKAssetEpub/WKConnectionDelegate.h>
#import <BKAssetEpub/WKBrowsingContextLoadDelegate.h>
#import <BKAssetEpub/BKWKURLLoader.h>
@class BKWKActionHandler, BKWKLoaderPool, NSView, BKDocumentResult, NSArray;


@protocol BKWKURLLoader <NSObject,BKAssetEpubViewEventHandler>
@property (nonatomic,readonly) BKWKActionHandler * actionHandler; 
@property (assign,nonatomic) char inUse; 
@property (assign,nonatomic) char isLoading; 
@property (assign,nonatomic,__weak) BKWKLoaderPool * pool; 
@property (nonatomic,readonly) NSView * loadedView; 
@property (nonatomic,readonly) BKDocumentResult * paginationResult; 
@property (nonatomic,readonly) id<BKEpubWebPaginationInfo> paginationInfo; 
@property (nonatomic,readonly) NSArray * errors; 
@property (assign,nonatomic) char connectionWasClosed; 
@property (assign,nonatomic,__weak) id<BKWKURLLoaderConnectionDelegate> connectionDelegate; 
@required
-(char)hasSelectedRange;
-(void)contentViewWasDoubleClicked;
-(void)contentViewWasTripleClicked;
-(void)setShouldIgnoreLiveResize:(char)arg1;
-(char)isShowingWebInspector;
-(void)setConnectionWasClosed:(char)arg1;
-(id<BKWKURLLoaderConnectionDelegate>)connectionDelegate;
-(void)setPaginationPageLength:(double)arg1;
-(char)connectionWasClosed;
-(void)setConnectionDelegate:(id)arg1;
-(void)hideWebInspector;
-(void)showWebInspector;
-(char)areDeveloperExtrasEnabled;
-(BKDocumentResult *)paginationResult;
-(id<BKEpubWebPaginationInfo>)paginationInfo;
-(void)setInUse:(char)arg1;
-(BKWKLoaderPool *)pool;
-(void)unloadWebView;
-(NSView *)loadedView;
-(void)updateBookInfo:(id)arg1;
-(void)executeScript:(id)arg1 completion:(/*^block*/id)arg2;
-(char)inUse;
-(NSArray *)errors;
-(void)setPool:(id)arg1;
-(void)setShouldClipToVisibleRect:(char)arg1;
-(char)isLoading;
-(void)setIsLoading:(char)arg1;
-(void)teardown;
-(unsigned long long)pageCount;
-(BKWKActionHandler *)actionHandler;

@end

#import <BKAssetEpub/BKCFIContext.h>

@protocol OS_dispatch_queue, BKEpubWebPaginationInfo, BKWKURLLoaderConnectionDelegate;
@class BKWKActionHandler, BKWKLoaderPool, NSView, BKDocumentResult, NSArray, NSMutableArray, NSObject, BKDocument, WKProcessGroup, WKBrowsingContextGroup, WKConnection, BKWKView, BKBook, NSString;

@interface BKWKURLLoader : NSObject <WKConnectionDelegate, WKBrowsingContextLoadDelegate, BKWKURLLoader, BKCFIContext> {

	NSMutableArray* _errors;
	char _inUse;
	char _isLoading;
	char _connectionWasClosed;
	char _tearingdown;
	char _torndown;
	BKWKLoaderPool* _pool;
	NSView* _loadedView;
	BKDocumentResult* _paginationResult;
	BKWKActionHandler* _actionHandler;
	NSObject*<OS_dispatch_queue> _loadQueue;
	id<BKEpubWebPaginationInfo> _paginationInfo;
	id<BKWKURLLoaderConnectionDelegate> _connectionDelegate;
	id _requester;
	BKDocument* _document;
	WKProcessGroup* _processGroup;
	WKBrowsingContextGroup* _contextGroup;
	WKConnection* _connection;
	BKWKView* _webView;
	BKBook* _book;
	/*^block*/id _loadCompletionHandler;
	unsigned long long _loadCount;
	unsigned long long _loadCountWhenInUse;

}

@property (assign,nonatomic,__weak) id requester;                                                        //@synthesize requester=_requester - In the implementation block
@property (nonatomic,retain) BKDocument * document;                                                      //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) BKWKActionHandler * actionHandler;                                          //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) id<BKEpubWebPaginationInfo> paginationInfo;                                 //@synthesize paginationInfo=_paginationInfo - In the implementation block
@property (nonatomic,retain) BKDocumentResult * paginationResult;                                        //@synthesize paginationResult=_paginationResult - In the implementation block
@property (nonatomic,retain) WKProcessGroup * processGroup;                                              //@synthesize processGroup=_processGroup - In the implementation block
@property (nonatomic,retain) WKBrowsingContextGroup * contextGroup;                                      //@synthesize contextGroup=_contextGroup - In the implementation block
@property (nonatomic,retain) WKConnection * connection;                                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) BKWKView * webView;                                                         //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) BKBook * book;                                                            //@synthesize book=_book - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> loadQueue;                                     //@synthesize loadQueue=_loadQueue - In the implementation block
@property (nonatomic,copy) id loadCompletionHandler;                                                     //@synthesize loadCompletionHandler=_loadCompletionHandler - In the implementation block
@property (assign,nonatomic) unsigned long long loadCount;                                               //@synthesize loadCount=_loadCount - In the implementation block
@property (assign,nonatomic) unsigned long long loadCountWhenInUse;                                      //@synthesize loadCountWhenInUse=_loadCountWhenInUse - In the implementation block
@property (assign,nonatomic) char tearingdown;                                                           //@synthesize tearingdown=_tearingdown - In the implementation block
@property (assign,nonatomic) char torndown;                                                              //@synthesize torndown=_torndown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<BKAssetEpubViewEventProcessor> viewEventProcessor; 
@property (assign,nonatomic) unsigned long long forwardedEvents; 
@property (assign,nonatomic) long long forwardedScrollWheelEventAxes; 
@property (assign,nonatomic) char inUse;                                                                 //@synthesize inUse=_inUse - In the implementation block
@property (assign,nonatomic) char isLoading;                                                             //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic,__weak) BKWKLoaderPool * pool;                                               //@synthesize pool=_pool - In the implementation block
@property (nonatomic,readonly) NSView * loadedView;                                                      //@synthesize loadedView=_loadedView - In the implementation block
@property (nonatomic,readonly) NSArray * errors;                                                         //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic) char connectionWasClosed;                                                   //@synthesize connectionWasClosed=_connectionWasClosed - In the implementation block
@property (assign,nonatomic,__weak) id<BKWKURLLoaderConnectionDelegate> connectionDelegate;              //@synthesize connectionDelegate=_connectionDelegate - In the implementation block
-(id)manifestId;
-(char)isRightToLeft;
-(unsigned long long)spineIndex;
-(id)assetId;
-(NSObject*<OS_dispatch_queue>)loadQueue;
-(void)p_teardown;
-(char)hasSelectedRange;
-(void)contentViewWasDoubleClicked;
-(void)contentViewWasTripleClicked;
-(void)setLoadCountWhenInUse:(unsigned long long)arg1 ;
-(void)setShouldIgnoreLiveResize:(char)arg1 ;
-(char)isShowingWebInspector;
-(void)setContextGroup:(WKBrowsingContextGroup *)arg1 ;
-(void)setPaginationResult:(BKDocumentResult *)arg1 ;
-(void)loadDocument:(id)arg1 withPaginationInfo:(id)arg2 layoutCompletionHandler:(/*^block*/id)arg3 ;
-(void)loadURL:(id)arg1 html:(id)arg2 withPaginationInfo:(id)arg3 layoutCompletionHandler:(/*^block*/id)arg4 ;
-(void)setLoadCompletionHandler:(id)arg1 ;
-(void)_establishConnectionIfNeeded:(/*^block*/id)arg1 ;
-(unsigned long long)loadCountWhenInUse;
-(void)p_browsingContextControllerLoadDidComplete:(char)arg1 loadCount:(unsigned long long)arg2 ;
-(id)loadCompletionHandler;
-(void)setConnectionWasClosed:(char)arg1 ;
-(id<BKWKURLLoaderConnectionDelegate>)connectionDelegate;
-(void)loadFixedLayoutDocument:(id)arg1 withPaginationInfo:(id)arg2 location:(id)arg3 layoutCompletionHandler:(/*^block*/id)arg4 ;
-(void)setPaginationPageLength:(double)arg1 ;
-(char)connectionWasClosed;
-(void)setConnectionDelegate:(id<BKWKURLLoaderConnectionDelegate>)arg1 ;
-(void)hideWebInspector;
-(void)showWebInspector;
-(char)areDeveloperExtrasEnabled;
-(void)setPaginationInfo:(id<BKEpubWebPaginationInfo>)arg1 ;
-(id)initWithBook:(id)arg1 ;
-(char)torndown;
-(BKDocumentResult *)paginationResult;
-(id<BKEpubWebPaginationInfo>)paginationInfo;
-(id<BKAssetEpubViewEventProcessor>)viewEventProcessor;
-(void)browsingContextControllerDidFailProvisionalLoad:(id)arg1 withError:(id)arg2 ;
-(void)setLoadCount:(unsigned long long)arg1 ;
-(void)browsingContextControllerDidFailLoad:(id)arg1 withError:(id)arg2 ;
-(void)setLoadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)debugCloseConnection;
-(void)setInUse:(char)arg1 ;
-(BKWKLoaderPool *)pool;
-(char)tearingdown;
-(void)unloadWebView;
-(unsigned long long)loadCount;
-(WKBrowsingContextGroup *)contextGroup;
-(void)setTearingdown:(char)arg1 ;
-(void)setTorndown:(char)arg1 ;
-(NSView *)loadedView;
-(void)updateBookInfo:(id)arg1 ;
-(void)setViewEventProcessor:(id<BKAssetEpubViewEventProcessor>)arg1 ;
-(void)executeScript:(id)arg1 completion:(/*^block*/id)arg2 ;
-(OpaqueWKPageRef)pageRef;
-(BKWKView *)webView;
-(WKProcessGroup *)processGroup;
-(void)setProcessGroup:(WKProcessGroup *)arg1 ;
-(char)inUse;
-(NSArray *)errors;
-(void)setPool:(BKWKLoaderPool *)arg1 ;
-(void)setConnection:(WKConnection *)arg1 ;
-(void)setWebView:(BKWKView *)arg1 ;
-(void)browsingContextControllerDidStartProvisionalLoad:(id)arg1 ;
-(void)connectionDidClose:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveMessageWithName:(id)arg2 body:(id)arg3 ;
-(void)setShouldClipToVisibleRect:(char)arg1 ;
-(WKConnection *)connection;
-(unsigned long long)chapterIndex;
-(id)requester;
-(void)setRequester:(id)arg1 ;
-(char)isLoading;
-(void)setIsLoading:(char)arg1 ;
-(void)teardown;
-(void)dealloc;
-(NSString *)description;
-(BKDocument *)document;
-(unsigned long long)pageCount;
-(void)setDocument:(BKDocument *)arg1 ;
-(BKBook *)book;
-(BKWKActionHandler *)actionHandler;
-(void)setActionHandler:(BKWKActionHandler *)arg1 ;
@end
