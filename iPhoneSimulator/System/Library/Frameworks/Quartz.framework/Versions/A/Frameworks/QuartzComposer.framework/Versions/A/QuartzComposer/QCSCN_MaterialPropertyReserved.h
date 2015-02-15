/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class QCSCN_Material, NSMutableDictionary, NSColor;

@interface QCSCN_MaterialPropertyReserved : NSObject {

	QCSCN_Material* _parent;
	int _propertyType;
	unsigned _presentationInstance : 1;
	NSMutableDictionary* _animations;
	_C3DImage* _c3dImage;
	_C3DTextureProxy* _textureProxy;
	NSColor* _color;
	NSColor* _borderColor;
	id _image;
	id _layer;
	id _proceduralContent;
	id _attachment;
	long long _mappingChannel;
	int _minFilter;
	int _magFilter;
	int _mipFilter;
	int _wrapS;
	int _wrapT;
	CATransform3D _contentTransform;

}
-(void)finalize;
-(void)dealloc;
@end

