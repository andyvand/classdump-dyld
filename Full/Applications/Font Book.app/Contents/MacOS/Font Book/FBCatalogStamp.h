/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Font Book/Font Book-Structs.h>
#import <Font Book/FBReportStamp.h>

@class NSMutableArray, NSFont, NSMutableDictionary;

@interface FBCatalogStamp : FBReportStamp {

	long long _pointsUsed;
	NSMutableArray* _cells;
	NSFont* _systemFont18;
	NSMutableDictionary* _systemFont18Attributes;
	NSFont* _systemFont14;
	NSMutableDictionary* _systemFont14Attributes;

}
+(void)setShowFamily:(char)arg1 ;
+(void)setPointSize:(long long)arg1 ;
-(double)samplePoints;
-(char)showFamilies;
-(id)smallFontAttributes;
-(id)bigFontAttributes;
-(id)initWithFrame:(CGRect)arg1 previewController:(id)arg2 delegate:(id)arg3 ;
-(void)_setupFonts;
-(char)addFont:(id)arg1 info:(long long*)arg2 ;
-(void)drawInView:(id)arg1 ;
-(void)dealloc;
@end

