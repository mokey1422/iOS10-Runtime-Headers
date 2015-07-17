/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPContentResult : SPSearchResult {
    NSString * _content;
    NSString * _extid;
}

@property (nonatomic, retain) NSString *content;
@property (nonatomic, retain) NSString *extid;

+ (id)resultWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 summary:(id)arg4 auxiliaryTitle:(id)arg5 auxiliarySubtitle:(id)arg6 actionURL:(id)arg7 searchableContent:(id)arg8;
+ (id)resultWithSearchResult:(id)arg1 identifier:(id)arg2 searchableContent:(id)arg3;

- (void).cxx_destruct;
- (id)content;
- (id)extid;
- (void)setContent:(id)arg1;
- (void)setExtid:(id)arg1;

@end