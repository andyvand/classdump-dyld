/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MCCIDURLProtocolDataProvider.h>
#import <Mail/NSCopying.h>

@class NSURL, NSData, NSString, NSMutableArray, NSImage, MCAttachment, DOMHTMLObjectElement, NSArray, NSItemProvider;

@interface MFAttachmentViewController : NSObject <MCCIDURLProtocolDataProvider, NSCopying> {

	NSMutableArray* _attachmentViews;
	char _canBeDisplayedInline;
	NSImage* _inlineImage;
	char _isBeingDisplayedInline;
	char _isInvisible;
	char _canBeDisplayedInRegisteredViewer;
	char _originalImageSizeHasBeenComputed;
	char _isImageBeingResized;
	MCAttachment* _attachment;
	long long _domNodeWidth;
	long long _domNodeHeight;
	DOMHTMLObjectElement* _objectElement;
	CGSize _targetImageSize;
	CGSize _originalImageSize;
	CGSize _previousTargetImageSize;

}

@property (nonatomic,copy,readonly) NSArray * attachmentViews; 
@property (nonatomic,readonly) MCAttachment * attachment;                        //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) DOMHTMLObjectElement * objectElement;               //@synthesize objectElement=_objectElement - In the implementation block
@property (assign,nonatomic) char isBeingDisplayedInline; 
@property (assign,nonatomic) long long domNodeWidth;                             //@synthesize domNodeWidth=_domNodeWidth - In the implementation block
@property (assign,nonatomic) long long domNodeHeight;                            //@synthesize domNodeHeight=_domNodeHeight - In the implementation block
@property (assign,nonatomic) CGSize targetImageSize;                             //@synthesize targetImageSize=_targetImageSize - In the implementation block
@property (nonatomic,readonly) NSItemProvider * itemProvider; 
@property (assign,nonatomic) char canBeDisplayedInRegisteredViewer;              //@synthesize canBeDisplayedInRegisteredViewer=_canBeDisplayedInRegisteredViewer - In the implementation block
@property (assign,nonatomic) CGSize originalImageSize;                           //@synthesize originalImageSize=_originalImageSize - In the implementation block
@property (assign,nonatomic) char originalImageSizeHasBeenComputed;              //@synthesize originalImageSizeHasBeenComputed=_originalImageSizeHasBeenComputed - In the implementation block
@property (assign,nonatomic) CGSize previousTargetImageSize;                     //@synthesize previousTargetImageSize=_previousTargetImageSize - In the implementation block
@property (assign,nonatomic) char isImageBeingResized;                           //@synthesize isImageBeingResized=_isImageBeingResized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSURL * cidURL; 
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSString * mimeType; 
@property (readonly) long long fileSize; 
+(Class)_viewProviderClassForMimeType:(id)arg1 ;
+(void)registerViewingClass:(Class)arg1 forMimeTypes:(id)arg2 ;
+(void)initialize;
-(NSString *)mimeType;
-(char)shouldDownloadAttachmentOnDisplay;
-(char)shouldBeDisplayedInlineByDefault;
-(void)setIsBeingDisplayedInline:(char)arg1 ;
-(void)_attachmentDidFinishReading:(id)arg1 ;
-(char)canBeDisplayedInRegisteredViewer;
-(char)canBeDisplayedInline;
-(void)setInvisible:(char)arg1 ;
-(DOMHTMLObjectElement *)objectElement;
-(char)originalImageSizeHasBeenComputed;
-(void)setOriginalImageSize:(CGSize)arg1 ;
-(void)setOriginalImageSizeHasBeenComputed:(char)arg1 ;
-(CGSize)originalImageSize;
-(char)isImageBeingResized;
-(CGSize)targetImageSize;
-(void)setIsImageBeingResized:(char)arg1 ;
-(CGSize)originalImageSizeWithOriginalImage:(id)arg1 ;
-(void)setTargetImageSize:(CGSize)arg1 ;
-(void)setPreviousTargetImageSize:(CGSize)arg1 ;
-(CGSize)previousTargetImageSize;
-(char)isBeingDisplayedInline;
-(void)_imageDataDidChange:(id)arg1 ;
-(id)iconImage;
-(void)setCanBeDisplayedInRegisteredViewer:(char)arg1 ;
-(NSURL *)cidURL;
-(id)initWithAttachment:(id)arg1 ;
-(NSArray *)attachmentViews;
-(void)addAttachmentView:(id)arg1 ;
-(void)setCanBeDisplayedInline:(char)arg1 ;
-(void)resizingStarted:(CGSize)arg1 ;
-(void)resizingFinished:(id)arg1 imageSize:(CGSize)arg2 fileExtension:(id)arg3 fileType:(unsigned)arg4 maxImageSize:(CGSize)arg5 ;
-(id)inlineImage;
-(long long)domNodeWidth;
-(void)setDomNodeWidth:(long long)arg1 ;
-(long long)domNodeHeight;
-(void)setDomNodeHeight:(long long)arg1 ;
-(void)setObjectElement:(DOMHTMLObjectElement *)arg1 ;
-(NSItemProvider *)itemProvider;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(MCAttachment *)attachment;
@end

