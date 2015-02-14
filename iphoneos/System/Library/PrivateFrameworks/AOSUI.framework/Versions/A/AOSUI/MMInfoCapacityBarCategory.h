/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, CALayer, NSTextField, NSColor, NSByteCountFormatter;

@interface MMInfoCapacityBarCategory : NSObject {

	char _showsSizeInLabel;
	unsigned long long _sizeInBytes;
	unsigned long long _categoryIndex;
	NSString* _displayName;
	NSArray* _alternateDisplayNames;
	NSString* _toolTipLabel;
	NSString* _sizeDescription;
	CALayer* _layer;
	NSTextField* _label;
	NSColor* _color;
	NSByteCountFormatter* _byteCountFormatter;

}

@property (assign) unsigned long long sizeInBytes;                          //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
@property (readonly) unsigned long long categoryIndex;                      //@synthesize categoryIndex=_categoryIndex - In the implementation block
@property (copy) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSArray * alternateDisplayNames;                           //@synthesize alternateDisplayNames=_alternateDisplayNames - In the implementation block
@property (retain) NSString * toolTipLabel;                                 //@synthesize toolTipLabel=_toolTipLabel - In the implementation block
@property (retain) NSString * sizeDescription;                              //@synthesize sizeDescription=_sizeDescription - In the implementation block
@property (assign,nonatomic) char showsSizeInLabel;                         //@synthesize showsSizeInLabel=_showsSizeInLabel - In the implementation block
@property (assign,nonatomic) unsigned long long textAlignment; 
@property (nonatomic,readonly) CALayer * layer;                             //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) NSTextField * label;                         //@synthesize label=_label - In the implementation block
@property (readonly) NSColor * color;                                       //@synthesize color=_color - In the implementation block
@property (retain) NSByteCountFormatter * byteCountFormatter;               //@synthesize byteCountFormatter=_byteCountFormatter - In the implementation block
-(void)setByteCountFormatter:(NSByteCountFormatter *)arg1 ;
-(NSArray *)alternateDisplayNames;
-(NSByteCountFormatter *)byteCountFormatter;
-(unsigned long long)sizeInBytes;
-(id)initWithCategoryIndex:(unsigned long long)arg1 ;
-(NSString *)toolTipLabel;
-(id)allDisplayNames;
-(NSString *)sizeDescription;
-(void)setSizeInBytes:(unsigned long long)arg1 ;
-(unsigned long long)categoryIndex;
-(void)setAlternateDisplayNames:(NSArray *)arg1 ;
-(void)setToolTipLabel:(NSString *)arg1 ;
-(void)setSizeDescription:(NSString *)arg1 ;
-(char)showsSizeInLabel;
-(void)setShowsSizeInLabel:(char)arg1 ;
-(unsigned long long)textAlignment;
-(void)dealloc;
-(CALayer *)layer;
-(NSColor *)color;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setTextAlignment:(unsigned long long)arg1 ;
-(NSTextField *)label;
@end

