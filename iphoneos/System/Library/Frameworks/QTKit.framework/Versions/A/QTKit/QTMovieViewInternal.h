/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSPasteboard, NSMenu, NSPanel, QTIMAVManagerImageConsumer, CIImage;

@interface QTMovieViewInternal : NSObject {

	long long buttonsForcedShown;
	long long buttonsForcedHidden;
	unsigned mouseDownViewID;
	NSMutableArray* eventlist;
	NSPasteboard* draggingPasteboard;
	NSMenu* contextualMenu;
	NSPanel* dragHighlightOverlayPanel;
	char needToSetMovieSizeWhenDoneLiveResizing;
	QTIMAVManagerImageConsumer* qtIMAVManagerImageConsumer;
	CIImage* lastCIImageVendedToDelegate;

}
@end

