/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/NSDraggingSource.h>
#import <Mail/NSPasteboardItemDataProvider.h>

@class NSMutableArray, NSView, NSArray, NSString;

@interface AttachmentDragSession : NSObject <NSDraggingSource, NSPasteboardItemDataProvider> {

	NSMutableArray* _attachments;
	NSView* _sourceView;
	NSArray* _temporaryAttachmentURLs;

}

@property (nonatomic,retain) NSView * sourceView;                            //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,retain) NSArray * temporaryAttachmentURLs;              //@synthesize temporaryAttachmentURLs=_temporaryAttachmentURLs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSView *)sourceView;
-(void)setTemporaryAttachmentURLs:(NSArray *)arg1 ;
-(NSArray *)temporaryAttachmentURLs;
-(id)initWithSourceView:(id)arg1 attachments:(id)arg2 ;
-(char)startDragFromPoint:(CGPoint)arg1 event:(id)arg2 image:(id)arg3 ;
-(void)dealloc;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(void)draggingSession:(id)arg1 willBeginAtPoint:(CGPoint)arg2 ;
-(unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2 ;
-(void)draggingSession:(id)arg1 endedAtPoint:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(id)attachments;
-(void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3 ;
-(void)pasteboard:(id)arg1 provideDataForType:(id)arg2 ;
-(void)setSourceView:(NSView *)arg1 ;
@end
