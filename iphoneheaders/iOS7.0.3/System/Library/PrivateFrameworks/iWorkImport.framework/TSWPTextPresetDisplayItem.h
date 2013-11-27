/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPTextStylePreset, NSString;

@interface TSWPTextPresetDisplayItem : NSObject {

	TSWPTextStylePreset* _preset;
	NSString* _displayName;

}

@property (nonatomic,retain) TSWPTextStylePreset * preset;              //@synthesize preset=_preset - In the implementation block
@property (nonatomic,copy) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
-(void)setPreset:(id)arg1 ;
-(id)preset;
-(void)saveToArchive:(TextPresetDisplayItemArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const TextPresetDisplayItemArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithPreset:(id)arg1 displayName:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
@end
