	quote_two_c_style(&a_name, o->a_prefix, name_a, 0);
	quote_two_c_style(&b_name, o->b_prefix, name_b, 0);
	struct xdiff_emit_state xm;
	ecb.outf = xdiff_outf;
	ecb.priv = diff_words;
	diff_words->xm.consume = fn_out_diff_words_aux;
	xdi_diff(&minus, &plus, &xpp, &xecfg, &ecb);

	struct xdiff_emit_state xm;
	struct xdiff_emit_state xm;

		 * made to the preimage.
	struct xdiff_emit_state xm;
	  "|"
	{ "bibtex", "(@[a-zA-Z]{1,}[ \t]*\\{{0,1}[ \t]*[^ \t\"@',\\#}{~%]*).*$",
	{ "ruby", "^[ \t]*((class|module|def)[ \t].*)$",
	  REG_EXTENDED },
	/* Never use a non-valid filename anywhere if at all possible */
	name_a = DIFF_FILE_VALID(one) ? name_a : name_b;
	name_b = DIFF_FILE_VALID(two) ? name_b : name_a;
	a_one = quote_two(o->a_prefix, name_a + (*name_a == '/'));
	b_two = quote_two(o->b_prefix, name_b + (*name_b == '/'));
		ecb.outf = xdiff_outf;
		ecb.priv = &ecbdata;
		ecbdata.xm.consume = fn_out_consume;
		xdi_diff(&mf1, &mf2, &xpp, &xecfg, &ecb);
		ecb.outf = xdiff_outf;
		ecb.priv = diffstat;
		xdi_diff(&mf1, &mf2, &xpp, &xecfg, &ecb);
	data.xm.consume = checkdiff_consume;
		ecb.outf = xdiff_outf;
		ecb.priv = &data;
		xdi_diff(&mf1, &mf2, &xpp, &xecfg, &ecb);
	options->a_prefix = "a/";
	options->b_prefix = "b/";
	struct xdiff_emit_state xm;
	data.xm.consume = patch_id_consume;
		ecb.outf = xdiff_outf;
		ecb.priv = &data;
		xdi_diff(&mf1, &mf2, &xpp, &xecfg, &ecb);
		diffstat.xm.consume = diffstat_consume;