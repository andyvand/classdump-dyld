/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:05:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/ColorSync Utility.app/Contents/MacOS/ColorSync Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ColorSync Utility/ColorSync Utility-Structs.h>
#import <ColorSync Utility/CSProfTag.h>

@class PlotView, NSForm, NSTextField, NSString;

@interface ParaTag : CSProfTag {

	PlotView* _curvView;
	NSForm* _form;
	NSTextField* _paraTypeStr;
	NSTextField* _paraFuncStr;
	NSTextField* _paraOrStr;
	NSString* _paraTypeStrOrig;
	NSString* _paraFuncStrOrig;
	NSString* _paraOrStrOrig;

}
-(id)describeTagType:(unsigned)arg1 dataType:(unsigned)arg2 dataSize:(unsigned)arg3 ;
-(void)setProfile:(ColorSyncProfileRef)arg1 tagType:(unsigned)arg2 dataType:(unsigned)arg3 ;
-(char)canDisplayTagType:(unsigned)arg1 dataType:(unsigned)arg2 dataSize:(unsigned)arg3 ;
-(void)dealloc;
-(void)awakeFromNib;
@end

