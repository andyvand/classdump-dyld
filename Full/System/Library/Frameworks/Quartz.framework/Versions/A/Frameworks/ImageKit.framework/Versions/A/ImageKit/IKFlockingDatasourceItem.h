/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IKImageWrapper, NSString;

@interface IKFlockingDatasourceItem : NSObject {

	IKImageWrapper* _image;
	NSString* _title;
	NSString* _imageUID;
	unsigned long long _imageVersion;

}
-(id)imageRepresentationType;
-(void)setImageUID:(id)arg1 ;
-(void)setImageVersion:(unsigned long long)arg1 ;
-(id)imageRepresentation;
-(id)imageUID;
-(unsigned long long)imageVersion;
-(id)imageTitle;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
@end

