/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailUI/MailUI-Structs.h>
#import <MailUI/MCCIDURLProtocolDataProvider.h>
#import <MailUI/QLPreviewItem.h>

@class NSURL, NSString, MUIWebAttachment, MUIWKViewController, _MUIWebAttachmentIconPrintingDataProvider, NSImage, NSProgress, NSDate, NSData;

@interface MUIWebAttachmentController : NSObject <MCCIDURLProtocolDataProvider, QLPreviewItem> {

	unsigned long long _displayState;
	char _canBeDisplayedInline;
	MUIWebAttachment* _webAttachment;
	MUIWKViewController* _controller;
	NSString* _markup;
	_MUIWebAttachmentIconPrintingDataProvider* _iconPrintingDataProvider;
	NSImage* _cachedSnapshot;
	long long _downloadedState;
	NSURL* _alternateCIDURL;
	NSProgress* _downloadProgress;
	NSDate* _expiration;
	CGRect _cachedFrame;
	CGRect _cachedIconFrame;

}

@property (nonatomic,readonly) MUIWebAttachment * webAttachment;                                                //@synthesize webAttachment=_webAttachment - In the implementation block
@property (assign,nonatomic,__weak) MUIWKViewController * controller;                                           //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) NSString * markup;                                                               //@synthesize markup=_markup - In the implementation block
@property (assign,nonatomic) CGRect cachedFrame;                                                                //@synthesize cachedFrame=_cachedFrame - In the implementation block
@property (assign,nonatomic) CGRect cachedIconFrame;                                                            //@synthesize cachedIconFrame=_cachedIconFrame - In the implementation block
@property (nonatomic,retain) NSImage * cachedSnapshot;                                                          //@synthesize cachedSnapshot=_cachedSnapshot - In the implementation block
@property (assign,nonatomic) unsigned long long displayState; 
@property (assign,nonatomic) char canBeDisplayedInline;                                                         //@synthesize canBeDisplayedInline=_canBeDisplayedInline - In the implementation block
@property (nonatomic,retain) _MUIWebAttachmentIconPrintingDataProvider * iconPrintingDataProvider;              //@synthesize iconPrintingDataProvider=_iconPrintingDataProvider - In the implementation block
@property (assign,nonatomic) long long downloadedState;                                                         //@synthesize downloadedState=_downloadedState - In the implementation block
@property (nonatomic,retain) NSURL * alternateCIDURL;                                                           //@synthesize alternateCIDURL=_alternateCIDURL - In the implementation block
@property (nonatomic,retain) NSProgress * downloadProgress;                                                     //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,retain) NSDate * expiration;                                                               //@synthesize expiration=_expiration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSURL * cidURL; 
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSString * mimeType; 
@property (readonly) long long fileSize; 
@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
@property (readonly) id previewItemDisplayState; 
-(unsigned long long)displayState;
-(MUIWebAttachment *)webAttachment;
-(void)startDownloadingIfNeededWithProgress:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(CGRect)cachedFrame;
-(void)_generateAttachmentMarkup;
-(void)_handleDownloadFinished;
-(void)setDownloadedState:(long long)arg1 ;
-(void)_refreshAttachmentMarkup;
-(long long)downloadedState;
-(void)setAlternateCIDURL:(NSURL *)arg1 ;
-(NSString *)markup;
-(id)_genericAttachmentMarkup:(id)arg1 downloadedState:(long long)arg2 ;
-(id)_couponAttachmentMarkup:(id)arg1 ;
-(_MUIWebAttachmentIconPrintingDataProvider *)iconPrintingDataProvider;
-(char)_displayedInline;
-(CGRect)cachedIconFrame;
-(NSURL *)alternateCIDURL;
-(id)initWithWebAttachment:(id)arg1 controller:(id)arg2 ;
-(id)registrationScriptString;
-(id)creationScriptString;
-(id)creationScriptStringForDropPoint:(CGPoint)arg1 ;
-(id)deletionScriptString;
-(id)transitionImageForPreview;
-(CGRect)frameForPreview;
-(void)setImageScale:(unsigned long long)arg1 ;
-(void)setCachedFrame:(CGRect)arg1 ;
-(void)setCachedIconFrame:(CGRect)arg1 ;
-(void)setIconPrintingDataProvider:(_MUIWebAttachmentIconPrintingDataProvider *)arg1 ;
-(void)setCachedSnapshot:(NSImage *)arg1 ;
-(NSImage *)cachedSnapshot;
-(NSString *)mimeType;
-(char)canBeDisplayedInline;
-(NSURL *)cidURL;
-(void)setCanBeDisplayedInline:(char)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(MUIWKViewController *)controller;
-(NSData *)data;
-(void)setController:(MUIWKViewController *)arg1 ;
-(void)setDisplayState:(unsigned long long)arg1 ;
-(NSString *)previewItemTitle;
-(NSURL *)previewItemURL;
-(void)setDownloadProgress:(NSProgress *)arg1 ;
-(NSProgress *)downloadProgress;
-(NSDate *)expiration;
-(void)setExpiration:(NSDate *)arg1 ;
@end

