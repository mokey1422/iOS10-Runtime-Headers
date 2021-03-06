/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAConnectionPolicy : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSNumber *globalTimeout;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *policyId;
@property (nonatomic, copy) NSArray *routes;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *timeToLive;

+ (id)connectionPolicy;
+ (id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2;

- (bool)enabled;
- (id)encodedClassName;
- (id)globalTimeout;
- (id)groupIdentifier;
- (id)policyId;
- (id)routes;
- (void)setEnabled:(bool)arg1;
- (void)setGlobalTimeout:(id)arg1;
- (void)setPolicyId:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setTimeToLive:(id)arg1;
- (id)timeToLive;

@end
