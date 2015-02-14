/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Suggestions/Suggestions-Structs.h>
#import <Suggestions/SGTSuggestion.h>

@class NSColor, NSImage, NSString;

@interface SGTFileLabelSuggestion : SGTSuggestion {

	NSColor* labelColor;
	NSImage* swatchImage;
	NSString* labelIdentifier;
	long long label;
	char isFinderLabel;

}

@property (readonly) long long label; 
@property (readonly) CFUUIDRef labelUUID; 
@property (readonly) NSColor * labelColor; 
+(id)_colorForLabel:(long long)arg1 ;
+(id)labelsCategory;
-(long long)scope;
-(id)_identifier;
-(void)dealloc;
-(NSColor *)labelColor;
-(long long)label;
-(id)queryStringFragment;
-(id)scopes;
-(id)displayNameForScope:(long long)arg1 ;
-(char)_shouldNotBeIncludedInRecents;
-(id)_propertyListRepresentation;
-(id)imageForMenu;
-(id)tokenImage;
-(id)tokenTitle;
-(id)initWithLabelIdentifier:(id)arg1 displayName:(id)arg2 labelColorIndex:(long long)arg3 labelUUID:(CFUUIDRef)arg4 isFinderLabel:(char)arg5 ;
-(id)initWithMDLabel:(MDLabelRef)arg1 ;
-(CFUUIDRef)labelUUID;
@end

