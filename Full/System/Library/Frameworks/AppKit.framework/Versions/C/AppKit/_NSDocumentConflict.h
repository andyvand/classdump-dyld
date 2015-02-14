/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSDocumentConflictPanelController, NSFileVersion, NSImage;

@interface _NSDocumentConflict : NSObject {

	NSDocumentConflictPanelController* _controller;
	NSFileVersion* _version;
	char _selected;
	QLThumbnailRef _thumbnail;
	NSImage* _thumbnailImage;
	char _showName;

}

@property (assign) NSDocumentConflictPanelController * controller;              //@synthesize controller=_controller - In the implementation block
@property (retain) NSFileVersion * version;                                     //@synthesize version=_version - In the implementation block
@property (getter=isSelected) char selected;                                    //@synthesize selected=_selected - In the implementation block
@property (copy) NSImage * thumbnail;                                           //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign) char showName;                                               //@synthesize showName=_showName - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSDocumentConflictPanelController *)controller;
-(void)setVersion:(NSFileVersion *)arg1 ;
-(void)setController:(NSDocumentConflictPanelController *)arg1 ;
-(id)previewItemTitle;
-(id)previewItemURL;
-(char)isSelected;
-(NSFileVersion *)version;
-(void)setSelected:(char)arg1 ;
-(void)setShowName:(char)arg1 ;
-(void)startLoadingDocumentThumbnailWithSize:(CGSize)arg1 scaleFactor:(double)arg2 force:(char)arg3 ;
-(char)showName;
-(void)setThumbnail:(NSImage *)arg1 ;
-(id)originText;
-(id)nameAndDateText;
-(NSImage *)thumbnail;
@end

