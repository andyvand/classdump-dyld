/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXMLNode, NSXMLElement;

@interface PKDistributionScript : NSObject {

	NSXMLNode* _node;
	NSXMLElement* _addToParent;
	char _useParentAsScriptParent;

}
-(void)setScript:(id)arg1 ;
-(id)_initWithNode:(id)arg1 ;
-(id)_initWithNode:(id)arg1 addToParent:(id)arg2 ;
-(id)_initWithExpression:(id)arg1 ;
-(void)_setUseParentAsScriptParent:(char)arg1 ;
-(id)_scriptParent;
-(id)_forIdentifier;
-(void)_addToParentIfNeeded;
-(id)sourceURI;
-(id)sourceTextForEvaluation;
-(id)literalValue;
-(id)script;
-(void)dealloc;
-(id)description;
-(void)setValue:(id)arg1 ;
-(void)remove;
-(id)attributeName;
-(id)value;
@end

