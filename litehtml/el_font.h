#pragma once
#include "html_tag.h"

namespace litehtml
{
	class el_font : public html_tag
	{
	public:
		el_font(litehtml::document* doc);
		virtual ~el_font();

		virtual void parse_styles(bool is_reparse);
	};
}