/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>

@class MKLinkTextField, NSAttributedString, NSURL;

@interface MKPlaceAttributionCell : NSView {

	MKLinkTextField* _textCell;
	NSAttributedString* _attributionString;
	NSURL* _webAttributionURL;
	/*^block*/id _linkCompletionHandler;

}

@property (nonatomic,retain) NSURL * webAttributionURL;                           //@synthesize webAttributionURL=_webAttributionURL - In the implementation block
@property (nonatomic,copy) id linkCompletionHandler;                              //@synthesize linkCompletionHandler=_linkCompletionHandler - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributionString;              //@synthesize attributionString=_attributionString - In the implementation block
@property (nonatomic,retain) MKLinkTextField * textCell;                          //@synthesize textCell=_textCell - In the implementation block
-(void)setAttributionString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributionString;
-(void)setWebAttributionURL:(NSURL *)arg1 ;
-(void)setLinkCompletionHandler:(id)arg1 ;
-(MKLinkTextField *)textCell;
-(void)setTextCell:(MKLinkTextField *)arg1 ;
-(NSURL *)webAttributionURL;
-(id)linkCompletionHandler;
-(id)initWithFrame:(CGRect)arg1 ;
@end

