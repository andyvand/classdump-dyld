/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface VUCategory : NSObject {

	NSString* _displayName;
	id _value;

}

@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) id value;                            //@synthesize value=_value - In the implementation block
+(id)categoryWithDisplayName:(id)arg1 value:(id)arg2 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
@end
