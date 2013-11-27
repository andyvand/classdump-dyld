/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/safarifetcherd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ReaderControllerDelegate <NSObject>
@optional
-(void)didInitReaderJSController:(ReaderJSController*)arg1;
-(id)readerPageArchiveURL;
-(BOOL)networkIsReachable;
-(void)didClickLinkInReaderWithRequest:(id)arg1;
-(void)didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg1;
-(void)didFinishLoadReaderDocument;
-(void)didChangeNextPageLoadingState:(BOOL)arg1;
-(void)willActivateReader;
-(void)didActivateReader;
-(void)didDeactivateReaderWithMode:(int)arg1;
-(void)didFinishLoadingReaderPage;
-(void)webFrame:(id)arg1 didFinishLoadingNextPageNumber:(unsigned)arg2;
-(id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;

@required
-(BOOL)isShowingReadingListArchive;
-(int)readerOperationMode;
@end
